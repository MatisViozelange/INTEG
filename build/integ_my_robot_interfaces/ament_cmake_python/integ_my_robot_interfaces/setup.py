from setuptools import find_packages
from setuptools import setup

setup(
    name='integ_my_robot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('integ_my_robot_interfaces', 'integ_my_robot_interfaces.*')),
)
