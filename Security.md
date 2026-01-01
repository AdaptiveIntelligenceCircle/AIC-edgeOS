# Security Policy

## Scope

AIC-edgeOS is an experimental adaptive operating system prototype.
Security is a **first-class concern**, not an afterthought.

This document outlines how to report security issues responsibly.

---

## Reporting a vulnerability

If you discover a security vulnerability, please **do not open a public issue**.

Instead, report it responsibly by contacting the project maintainer directly.

Include:
- A clear description of the issue
- Steps to reproduce (if applicable)
- Potential impact
- Any suggested mitigations (optional)

Reports will be acknowledged as soon as reasonably possible.

---

## What counts as a security issue

Examples include (but are not limited to):

- Privilege escalation
- Unsafe state transitions
- Broken rollback guarantees
- Trust model bypasses
- Undefined behavior leading to system compromise
- Introspection abuse or leakage
- Failure modes that allow persistent corruption

---

## Disclosure process

1. Issue is acknowledged
2. Impact is assessed
3. Fix or mitigation is developed
4. Disclosure is coordinated responsibly

There is no fixed disclosure timeline, as this is a research-stage project.

---

## Supported versions

As AIC-edgeOS is in early development:

- No versions are considered production-ready
- Security fixes may not be backported
- API and behavior may change without notice

---

## Security philosophy

AIC-edgeOS assumes:
- Failures will happen
- Systems may be partially compromised
- Trust must be continuously evaluated
- Recovery is as important as prevention

Security is not the absence of failure,
but the presence of controlled recovery.

---

## Ethical use

Security research conducted within this project should aim to:
- Improve system resilience
- Protect users and communities
- Prevent misuse and escalation

Deliberate misuse of disclosed vulnerabilities is unacceptable.
