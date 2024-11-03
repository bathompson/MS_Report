from setuptools import find_packages
from setuptools import setup

setup(
    name='incubator_cpp_pkg_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('incubator_cpp_pkg_interfaces', 'incubator_cpp_pkg_interfaces.*')),
)
