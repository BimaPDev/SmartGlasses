/* FUN_2c561d78 @ 0x2c561d78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c561d78(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint local_20;
  int local_1c;
  
  local_1c = *_LAB_2c562008;
  puVar1 = param_1 + 3;
  *param_1 = _LAB_2c562004;
  param_1[1] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 8);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c561ff8;
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 3) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c561f3a;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0,0);
    param_1[1] = puVar1;
    param_1[3] = local_20;
LAB_2c561f3a:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[1];
  }
  param_1[2] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  puVar1 = param_1 + 9;
  param_1[7] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x20);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c561ff8;
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 9) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c561f72;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0);
    param_1[7] = puVar1;
    param_1[9] = local_20;
LAB_2c561f72:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[7];
  }
  param_1[8] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xd] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x34);
  uVar2 = *(uint *)(param_2 + 0x38);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c561ff8;
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0xf) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c561f56;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0);
    param_1[0xd] = puVar1;
    param_1[0xf] = local_20;
LAB_2c561f56:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[0xd];
  }
  param_1[0xe] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  puVar1 = param_1 + 0x15;
  param_1[0x13] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x4c);
  uVar2 = *(uint *)(param_2 + 0x50);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c561ff8;
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x15) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c561f8e;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0);
    param_1[0x13] = puVar1;
    param_1[0x15] = local_20;
LAB_2c561f8e:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[0x13];
  }
  param_1[0x14] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  puVar1 = param_1 + 0x1b;
  param_1[0x19] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 100);
  uVar2 = *(uint *)(param_2 + 0x68);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c561ff8;
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x1b) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c561fc8;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0);
    param_1[0x19] = puVar1;
    param_1[0x1b] = local_20;
LAB_2c561fc8:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[0x19];
  }
  param_1[0x1a] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  puVar1 = param_1 + 0x21;
  param_1[0x1f] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x7c);
  uVar2 = *(uint *)(param_2 + 0x80);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c561ff8;
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x21) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c561fac;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0);
    param_1[0x1f] = puVar1;
    param_1[0x21] = local_20;
LAB_2c561fac:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[0x1f];
  }
  param_1[0x20] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  puVar1 = param_1 + 0x27;
  param_1[0x25] = puVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x94);
  uVar2 = *(uint *)(param_2 + 0x98);
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
LAB_2c561ff8:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c56200c);
  }
  local_20 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x27) = *puVar3;
      goto LAB_2c561ece;
    }
    if (uVar2 == 0) goto LAB_2c561ece;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c560bac(&local_20,0);
    param_1[0x25] = puVar1;
    param_1[0x27] = local_20;
  }
  FUN_2c674668(puVar1,puVar3,uVar2);
  puVar1 = (undefined4 *)param_1[0x25];
LAB_2c561ece:
  param_1[0x26] = local_20;
  *(undefined1 *)((int)puVar1 + local_20) = 0;
  param_1[0x2b] = *(undefined4 *)(param_2 + 0xac);
  FUN_2c550910(param_1 + 0x2c,param_2 + 0xb0);
  if (*_LAB_2c562008 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

