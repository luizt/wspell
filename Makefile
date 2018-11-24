# Licensed under the Apache License, Version 2.0
# Copyright 2018 Luiz Reuter <luiz.torro@gmail.com>

wspell : wspell.cpp
	c++ -std=c++11 -Wall wspell.cpp -o wspell

clean :
	rm -f wspell
