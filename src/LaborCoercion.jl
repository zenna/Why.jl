module LaborCoercion

# There is a population of mass 1 of identical (coercive) producers and a
# population of mass L < 1 of identical agents
L = Var([0, 1])

# Each producer has a project that yields x > 0 units of a consumption good if
# successful and zero units if unsuccessful
x = Var(Real⁺)

# Each producer is initially randomly matched with a worker with probability L

# A producer with productivity x who is matched with an agent chooses a level of guns
# η > 0 corresponds to the cost of guns
η = Var(Real⁺)
guncost(g) = η * χ(g)

payoff(contract, agent) = agent.ū - contract.g

# and commits to a "contract" spiecfying output-dependent wage-puinshment 

struct Contract
  wʰ      # Wage for high output
  wˡ      # Wage for low output
  pʰ      # Punishment for high output
  pʰ      # Punishment for low output
end

# If the agent accepts the contract offer, then she chooses effort level a ∈ [0, 1] at private cost c(a)

function ok()
end


end
