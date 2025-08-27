from conan import ConanFile
from conan.tools.cmake import cmake_layout, CMake, CMakeDeps, CMakeToolchain

class MyProjectConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    def requirements(self):
      dependencies = [
        "fmt/10.2.1",
        "spdlog/1.14.1",
        "nlohmann_json/3.11.3"
      ]
      for dep in dependencies:
            self.requires(dep)

    def layout(self):
        cmake_layout(self)

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def generate(self):
      # Instantiate and generate the CMakeDeps files
      cmake_deps = CMakeDeps(self)
      cmake_deps.generate()

      # Instantiate and generate the CMakeToolchain files
      cmake_toolchain = CMakeToolchain(self)
      cmake_toolchain.user_presets_path = ""
      cmake_toolchain.generate()
