#include "AStarNode.hh"

//-------------------------
// Constructor
//-------------------------
AStarNode::AStarNode(string name, int xID, int yID)
:	name_(name),
	xID_(xID),
	yID_(yID)
{
	F_cost_ = 0;
	G_cost_ = 0;
	H_cost_ = 0;

	Status_ = "None";
}

//-------------------------
// Destructor
//-------------------------
AStarNode::~AStarNode()
{}

//-------------------------
// Public
//-------------------------
void AStarNode::ComputeHCost()
{
}

void AStarNode::SetStatus(string Status)
{
	Status_ = Status;
}

