#!/bin/bash

codeblocks --build DealDone.cbp | grep error 

./bin/Debug/DealDone
