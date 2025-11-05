from setuptools import find_packages
from setuptools import setup

setup(
    name='xpkg_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('xpkg_msgs', 'xpkg_msgs.*')),
)
