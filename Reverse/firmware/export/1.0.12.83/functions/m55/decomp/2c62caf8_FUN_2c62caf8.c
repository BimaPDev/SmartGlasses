/* FUN_2c62caf8 @ 0x2c62caf8 */

void FUN_2c62caf8(void)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *in_stack_00000000;
  uint in_stack_00000004;
  char in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if ((in_stack_00000018 & 2) == 0) {
    if (in_stack_00000014 == 0) {
      if ((in_stack_00000004 < 0x20) && (in_stack_00000004 < in_stack_00000010)) goto LAB_2c62cb24;
LAB_2c62cb3c:
      if ((in_stack_00000018 & 1) == 0) goto LAB_2c62cb72;
      if (in_stack_00000004 < 0x20) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      if ((in_stack_00000018 & 1) == 0) {
        if ((in_stack_00000010 <= in_stack_00000004) || (0x1f < in_stack_00000004))
        goto LAB_2c62cb72;
LAB_2c62cb24:
        puVar3 = in_stack_00000000 + (in_stack_00000004 - 1);
        do {
          in_stack_00000004 = in_stack_00000004 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = 0x30;
          if (in_stack_00000010 <= in_stack_00000004) break;
        } while (in_stack_00000004 < 0x20);
        goto LAB_2c62cb3c;
      }
      if ((in_stack_00000008 != '\0') || ((in_stack_00000018 & 0xc) != 0)) {
        in_stack_00000014 = in_stack_00000014 - 1;
      }
      bVar1 = in_stack_00000004 < 0x20;
      if ((in_stack_00000004 < in_stack_00000010) && (bVar1)) goto LAB_2c62cb24;
    }
    if ((in_stack_00000004 < in_stack_00000014) && (bVar1)) {
      puVar3 = in_stack_00000000 + (in_stack_00000004 - 1);
      do {
        in_stack_00000004 = in_stack_00000004 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = 0x30;
        if (in_stack_00000014 <= in_stack_00000004) break;
      } while (in_stack_00000004 < 0x20);
    }
  }
LAB_2c62cb72:
  if ((in_stack_00000018 & 0x10) == 0) {
LAB_2c62cbd6:
    if (0x1f < in_stack_00000004) goto LAB_2c62cba0;
  }
  else {
    uVar2 = in_stack_00000004;
    if ((in_stack_00000018 & 0x400) != 0) {
LAB_2c62cb7e:
      in_stack_00000004 = uVar2;
      if (in_stack_0000000c == 0x10) {
        if (in_stack_00000004 < 0x20) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        goto LAB_2c62cc82;
      }
      if (in_stack_0000000c == 2) {
        if (0x1f < in_stack_00000004) goto LAB_2c62cba0;
        puVar3 = in_stack_00000000 + in_stack_00000004;
        in_stack_00000004 = in_stack_00000004 + 1;
        *puVar3 = 0x62;
      }
LAB_2c62cb9c:
      if (0x1f < in_stack_00000004) goto LAB_2c62cba0;
LAB_2c62cbc8:
      puVar3 = in_stack_00000000 + in_stack_00000004;
      in_stack_00000004 = in_stack_00000004 + 1;
      *puVar3 = 0x30;
      goto LAB_2c62cbd6;
    }
    if (in_stack_00000004 != 0) {
      if ((((in_stack_00000004 != in_stack_00000010) && (in_stack_00000004 != in_stack_00000014)) ||
          (uVar2 = in_stack_00000004 - 1, uVar2 == 0)) || (in_stack_0000000c != 0x10))
      goto LAB_2c62cb7e;
      in_stack_00000004 = in_stack_00000004 - 2;
      bVar1 = in_stack_00000004 < 0x20;
LAB_2c62cc82:
      if (((in_stack_00000018 & 0x20) == 0) && (bVar1)) {
        in_stack_00000000[in_stack_00000004] = 0x78;
        in_stack_00000004 = in_stack_00000004 + 1;
      }
      else if (((in_stack_00000018 & 0x20) != 0) && (bVar1)) {
        in_stack_00000000[in_stack_00000004] = 0x58;
        in_stack_00000004 = in_stack_00000004 + 1;
      }
      goto LAB_2c62cb9c;
    }
    if (in_stack_0000000c == 0x10) {
      bVar1 = true;
      goto LAB_2c62cc82;
    }
    if (in_stack_0000000c == 2) {
      *in_stack_00000000 = 0x62;
      in_stack_00000004 = 1;
      goto LAB_2c62cbc8;
    }
    *in_stack_00000000 = 0x30;
    in_stack_00000004 = 1;
  }
  if (in_stack_00000008 != '\0') {
    in_stack_00000000[in_stack_00000004] = 0x2d;
    FUN_2c62ca70();
    return;
  }
  if ((int)(in_stack_00000018 << 0x1d) < 0) {
    in_stack_00000000[in_stack_00000004] = 0x2b;
    FUN_2c62ca70();
    return;
  }
  if ((int)(in_stack_00000018 << 0x1c) < 0) {
    in_stack_00000000[in_stack_00000004] = 0x20;
  }
LAB_2c62cba0:
  FUN_2c62ca70();
  return;
}

