#include <iostream>
#include <fstream>

std::string sed(std::string content, std::string s1, std::string s2)
{
	std::string out = "";

	for (std::size_t i = 0; i < content.size(); i++)
	{
		std::size_t j = 0;
		while (content[i + j] == s1[j] && content[j])
			j++;
		if (s1[j])
			out += content[i];
		else
		{
			out += s2;
			i += j-1;
		}
	}
	return out;
}

std::string readFile(std::string filename)
{
	std::string out = "";

	std::ifstream file(filename.c_str());
	if (!file.is_open()) 
	{
		std::cerr << "Error: Couldn't read " << std::endl;
		return 0;
	}
	while (file)
	{
		char c;
		file.read(&c, 1);

		if (file)
			out += c;
	}

	file.close();

	return out;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return 0;
	
	std::string file(av[1]);
	std::string of(file + ".replace");
	std::string s1(av[2]);
	std::string s2(av[3]);

	std::ofstream ofile(of.c_str());
	if (!ofile.is_open())
	{
		std::cerr << "Error: Could not create output file " << of << std::endl;
		return 1;
	}
	ofile << sed(readFile(file), s1, s2);
	ofile.close();
}
