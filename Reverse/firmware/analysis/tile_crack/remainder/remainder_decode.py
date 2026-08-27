"""Drop-in remainder-strip decoder for BES2700 IDX4 (112-px panel strips).

Full 112-px strips are row-major, high-nibble-first, stored left→right.
The leftover strip (w % 112) has the same byte count ceil(rem_w/2)*h but
shears under that same rule. GPU decode_width / tile-align is not the
cause (see ghidra_decoder/GPU_DECODE.md). No packer permutation in
remainder_findings.md reconstructed the PIN's right edge; this identity
reshape is the byte-exact default.

Usage in decode.py::

    rem_w = w % PANEL
    ...
    idx[:, x0:x0+rem_w] = remainder_decode(nb[pos:pos+rem_w*h], w, h)
"""
import numpy as np

PANEL = 112


def remainder_decode(nb, w, h):
    """Unswizzle the leftover (w % 112) strip.

    Parameters
    ----------
    nb : array-like of uint8
        Nibble stream of the remainder strip only (high nibble already
        unpacked as even x). Length must be rem_w * h for even rem_w;
        for odd rem_w the unused pad nibble per row must already be stripped.
    w, h : int
        Full image size (rem_w = w % 112).

    Returns
    -------
    ndarray, shape (h, rem_w), dtype uint8
        Palette indices, row-major.
    """
    rem_w = w % PANEL
    if rem_w == 0:
        return np.zeros((h, 0), np.uint8)
    need = rem_w * h
    seg = np.asarray(nb, dtype=np.uint8).ravel()[:need]
    if len(seg) < need:
        seg = np.pad(seg, (0, need - len(seg)))
    return seg.reshape(h, rem_w)
