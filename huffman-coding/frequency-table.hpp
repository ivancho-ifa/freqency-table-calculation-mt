#pragma once

#include "../utils/log.hpp"

#include <string>
#include <array>

#include <ostream>

namespace FrequencyTable
{
	static const size_t FREQUENCY_TABLE_SIZE = 256;
	using FrequencyTableType = std::array<unsigned long long, FREQUENCY_TABLE_SIZE>;

	FrequencyTableType get_frequency_table(const std::string& file_path, unsigned int threads_count, Log& log);
	void print_frequency_table(Log& out, const FrequencyTableType& ft);
}
