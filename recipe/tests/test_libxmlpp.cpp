#include <libxml++/libxml++.h>

int main()
{
  xmlpp::DomParser parser;
  parser.parse_memory("<root><child>text</child></root>");
  const auto root = parser.get_document()->get_root_node();
  return root->get_name() == "root" ? 0 : 1;
}
