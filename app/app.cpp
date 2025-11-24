#include "app.h"
#include <format>

namespace vsite::oop::v1
{
	std::string to_hex(int n) 
	{
		return std::format("{:X}", n);
	}

	std::string to_exp(double d)
	{
		return std::format("{:.2e}", d);
	}

	void mult_table(int n, std::ostream& ss)
	{
		if (n == 0 || n > 20) {
			ss << "";
			return;
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				if (i == 0 && j == 0) {
					ss << "0";
					continue;
				}

				int result;

				if (i == 0) {
					result = j;
				}
				else if (j == 0) {
					result = i;
				}
				else {
					result = i * j;
				}

				if (j <= n && j != 0)
					ss << std::format("{:>4}", result);
				else
					ss << result;
			}
			ss << "\n";
		}

	}
} // namespace

