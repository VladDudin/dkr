#include "logger.h"

Logger::Logger(const std::string& filename)
    : m_outFile(filename, std::ios::app) { // ��������� ���� ��� ������, � ���� �����
    if (!m_outFile) {
        // �� ������ ������� ����
    }
}

Logger::~Logger() {
    if (m_outFile) {
        m_outFile.close();
    }
}

void Logger::log(const std::string& message) {
    m_outFile << message << std::endl;
}