/* FUN_2c550b6c @ 0x2c550b6c */

undefined4 *
FUN_2c550b6c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint local_28;
  int local_24;
  
  local_24 = *DAT_2c550ce8;
  *param_1 = DAT_2c550cec;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[1] = param_1 + 3;
  param_1[2] = 0;
  puVar1 = param_1 + 0x1b;
  param_1[7] = param_1 + 9;
  param_1[0x19] = puVar1;
  param_1[0xd] = param_1 + 0xf;
  param_1[0x13] = param_1 + 0x15;
  puVar3 = (undefined1 *)*param_3;
  uVar2 = param_3[1];
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c550cde;
  local_28 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x1b) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c550c90;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c54f538(&local_28,0);
    param_1[0x19] = puVar1;
    param_1[0x1b] = local_28;
LAB_2c550c90:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[0x19];
  }
  param_1[0x1a] = local_28;
  *(undefined1 *)((int)puVar1 + local_28) = 0;
  puVar1 = param_1 + 0x21;
  param_1[0x1f] = puVar1;
  puVar3 = (undefined1 *)*param_2;
  uVar2 = param_2[1];
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) goto LAB_2c550cde;
  local_28 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x21) = *puVar3;
    }
    else if (uVar2 != 0) goto LAB_2c550cd0;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c54f538(&local_28,0);
    param_1[0x1f] = puVar1;
    param_1[0x21] = local_28;
LAB_2c550cd0:
    FUN_2c674668(puVar1,puVar3,uVar2);
    puVar1 = (undefined4 *)param_1[0x1f];
  }
  param_1[0x20] = local_28;
  *(undefined1 *)((int)puVar1 + local_28) = 0;
  puVar1 = param_1 + 0x27;
  param_1[0x25] = puVar1;
  puVar3 = (undefined1 *)*param_4;
  uVar2 = param_4[1];
  if ((puVar3 + uVar2 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
LAB_2c550cde:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c550cf0);
  }
  local_28 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x27) = *puVar3;
      goto LAB_2c550c42;
    }
    if (uVar2 == 0) goto LAB_2c550c42;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c54f538(&local_28,0);
    param_1[0x25] = puVar1;
    param_1[0x27] = local_28;
  }
  FUN_2c674668(puVar1,puVar3,uVar2);
  puVar1 = (undefined4 *)param_1[0x25];
LAB_2c550c42:
  param_1[0x26] = local_28;
  *(undefined1 *)((int)puVar1 + local_28) = 0;
  param_1[0x2b] = param_5;
  FUN_2c550910(param_1 + 0x2c,param_6);
  if (*DAT_2c550ce8 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

