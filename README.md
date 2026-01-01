# AIC-edgeOS

**AIC-edgeOS** is a local-first, adaptive operating system prototype derived from **Adaptive OS**,  
designed to operate under constrained environments while preserving long-term correctness,
self-defense, and ethical alignment.

This project is part of the **Adaptive Intelligence Circle (AIC)** ecosystem.

-- 

<img width="1024" height="1024" alt="image" src="https://github.com/user-attachments/assets/d81f5db6-746b-4205-a78a-631e26a55908" />

## 1. Why AIC-edgeOS exists

Modern operating systems and AI systems share a common limitation:

- They are largely **logic-driven**, not **adaptive by design**
- They assume **stable resources**, centralized control, and continuous connectivity
- They prioritize performance and scalability over **survivability, trust, and rollback**

In real-world environments — especially at the edge — systems must:

- Operate **locally**, sometimes in isolation
- Adapt to overload, partial failure, or malicious behavior
- Maintain correctness without relying on large data centers
- Make decisions under uncertainty with limited resources

**AIC-edgeOS exists to explore a different foundation.**

---

## 2. What AIC-edgeOS is (and is not)

### AIC-edgeOS **is**
- A **branch implementation** of Adaptive OS
- A **reference implementation** of adaptive OS principles under constraints
- Local-first, resource-aware, and survivable by design
- Built around **adaptive control loops**, not static logic
- Designed to integrate with introspection and behavioral reasoning systems (IBCS)

### AIC-edgeOS **is not**
- A general-purpose replacement for Linux
- A commercial OS product
- A model-centric AI system
- A cloud-dependent platform
- A performance benchmark project

---

## 3. Relationship to Adaptive OS
``` pgsql 
Adaptive OS (meta-level)
│
├── Edge OS (local-first, constrained)
├── Cloud OS (nếu có, sau này)
├── Embedded / Civic OS (rất xa)

```
- **Adaptive OS** defines *what must exist*
- **AIC-edgeOS** demonstrates *how it can exist under constraints*

If AIC-edgeOS succeeds, it validates Adaptive OS principles.  
If it fails, Adaptive OS itself is not invalidated.

---

## 4. Core Design Principles

1. **Adaptation before optimization**
2. **Local correctness over global efficiency**
3. **Rollback is a first-class primitive**
4. **Trust is dynamic, not binary**
5. **Behavior is observable and introspectable**
6. **Failure is expected, not exceptional**
7. **Ethics are architectural, not policy-only**

---

## 5. High-level Architecture

At its core, AIC-edgeOS follows an adaptive loop:

> Sense → Evaluate → Decide → Act → Verify → Rollback (if needed)


This loop operates continuously at the OS level, not as an external controller.

---

## 6. Project Structure

```pgsql 
AIC-edgeOS/
│
├── README.md
├── LICENSE
│
├── docs/
│ ├── philosophy.md # Core ideas and ethical foundations
│ ├── architecture.md # System-level architecture
│ ├── threat_model.md # Assumed failures and adversarial conditions
│ └── roadmap.md # Evolution plan (non-marketing)
│
├── core/
│ ├── adaptive_kernel.h # Adaptive OS kernel contract
│ ├── adaptive_kernel.cpp
│ ├── control_loop.h # Sense → Decide → Act loop
│ ├── control_loop.cpp
│ └── state_snapshot.h # State representation & versioning
│
├── scheduler/
│ ├── adaptive_scheduler.h
│ └── adaptive_scheduler.cpp
│
├── trust/
│ ├── trust_engine.h # Dynamic trust evaluation
│ ├── trust_engine.cpp
│ └── policy.h
│
├── rollback/
│ ├── rollback_engine.h # State rollback & recovery
│ └── rollback_engine.cpp
│
├── introspection/
│ ├── introspection_hook.h # Hooks for IBCS integration
│ └── introspection_hook.cpp
│
├── runtime/
│ ├── task_context.h
│ ├── execution_guard.h
│ └── execution_guard.cpp
│
├── simulation/
│ ├── fault_injector.cpp # Failure and overload simulation
│ └── behavior_test.cpp
│
└── tests/
├── unit/
└── scenario/

```


---

## 7. Interaction with IBCS

AIC-edgeOS is designed to **expose introspection points**, not to embed reasoning logic directly.

- OS executes
- OS observes itself
- IBCS interprets behavior
- Decisions remain bounded by OS safety contracts

This separation prevents:
- Self-referential instability
- Unbounded policy mutation
- Ethical drift

---

## 8. Intended Use Cases

- Edge devices in unreliable environments
- Research on adaptive operating systems
- Experiments in trust-based execution
- Educational systems research
- Decentralized and civic computing exploration

---

## 9. Non-goals

To avoid ambiguity, AIC-edgeOS explicitly does **not** aim to:

- Compete with existing OS ecosystems
- Maximize throughput or benchmark scores
- Replace human governance
- Automate moral decisions without oversight

---

## 10. Status

**Early research and prototype stage.**

Stability, APIs, and internal contracts are expected to evolve.

Backward compatibility is *not* guaranteed at this stage.

---

## 11. Philosophy

AIC-edgeOS is developed under the belief that:

> Systems that cannot adapt ethically under constraint  
> will eventually fail socially, not just technically.

---

## 12. License

This project is released under the Apache License 2.0.  
See `LICENSE` for details.

---

## 13. A note from the founder

AIC-edgeOS is not built to win a race.  
It is built to remain correct when races distort judgment.

If you are looking for speed, this may not be for you.  
If you are looking for foundations, welcome.

