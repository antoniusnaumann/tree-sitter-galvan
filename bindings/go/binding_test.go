package tree_sitter_Galvan_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-Galvan"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_Galvan.Language())
	if language == nil {
		t.Errorf("Error loading Galvan grammar")
	}
}
