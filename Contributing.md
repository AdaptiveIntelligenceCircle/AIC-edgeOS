# Contributing to AIC-edgeOS

Thank you for your interest in contributing to **AIC-EdgeOS**.

This project is part of the Adaptive Intelligence Circle (AIC) and is developed as a
non-profit, research-driven effort focused on long-term system correctness,
adaptability, and ethical integrity.

---

## 1. Who this project is for

AIC-edgeOS welcomes contributors who:

- Care about **systems correctness over speed**
- Are interested in **operating systems, kernel-level design, and adaptive systems**
- Respect long-term thinking over short-term optimization
- Are comfortable working without immediate recognition or commercial incentives

This project may **not** be suitable if you are primarily looking for:
- Rapid feature shipping
- Commercial-ready APIs
- Marketing-driven open source contributions

---

## 2. Contribution philosophy

Before contributing, please understand:

- **Correctness > Performance**
- **Clarity > Cleverness**
- **Explicit design > Implicit behavior**
- **Adaptation is intentional, not emergent chaos**

Every contribution should be defensible under:
- Resource constraints
- Partial failure
- Adversarial conditions
- Ethical scrutiny

---

## 3. What you can contribute

You are welcome to contribute in the following areas:

- Core OS design discussions
- Adaptive control loops
- Rollback and recovery mechanisms
- Trust and policy systems
- Simulation and fault injection
- Documentation and design clarification
- Threat modeling and failure analysis

Small, well-reasoned contributions are preferred over large, opaque changes.

---

## 4. Before you submit a pull request

Please ensure that:

1. You have read the relevant documentation in `docs/`
2. Your change has a **clear motivation**
3. You understand how your change affects:
   - Adaptivity
   - Rollback safety
   - Trust boundaries
4. You have added tests or simulations where appropriate
5. You can explain your design in plain language

If a design cannot be explained clearly, it is likely not ready.

---

## 5. Coding guidelines

- Prefer explicit state transitions
- Avoid hidden global state
- Avoid premature optimization
- Use meaningful naming over brevity
- Document assumptions clearly
- Defensive programming is encouraged

Undefined behavior is considered a **critical bug**, not a minor issue.

---

## 6. Decision process

This project uses a **benevolent dictator + documented rationale** model:

- The maintainer (founder) has final decision authority
- All major decisions must be justified in writing
- Disagreement is welcome; disrespect is not
- Silence does not imply agreement

---

## 7. Ethics and responsibility

By contributing, you agree that:

- This project should not be used to harm individuals or societies
- Security and trust concerns must be reported responsibly
- Ethical concerns are valid technical concerns

---

## 8. Getting started

If you are unsure where to start:
- Read `docs/architecture.md`
- Look for issues labeled `discussion` or `design`
- Start with documentation or simulation improvements

Quality matters more than quantity.

Thank you for contributing thoughtfully.
