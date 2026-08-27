/* FUN_2c55cd64 @ 0x2c55cd64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55cd64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined1 auStack_9d0 [2500];
  int iStack_c;
  
  puVar1 = _LAB_2c55ce10;
  iStack_c = *_LAB_2c55ce0c;
  func_0x2c55ccfc(auStack_9d0,param_2,param_3,0);
  uVar7 = func_0x2c65e508(auStack_9d0);
  iVar2 = _LAB_2c55ce14;
  iVar9 = 1;
  *puVar1 = uVar7;
  puVar8 = puVar1;
  do {
    uVar7 = iVar2 * (uVar7 ^ uVar7 >> 0x1e) + iVar9;
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = uVar7;
    puVar3 = _LAB_2c55ce18;
  } while (iVar9 != 0x270);
  puVar1[0x270] = 0x270;
  puVar4 = _LAB_2c55ce1c;
  puVar3[1] = 0x11;
  puVar5 = _LAB_2c55ce20;
  *puVar3 = 10;
  puVar6 = _LAB_2c55ce28;
  puVar3 = _LAB_2c55ce24;
  *puVar4 = 0x1b;
  puVar4[1] = 0xad;
  puVar4 = _LAB_2c55ce2c;
  *puVar5 = 1;
  puVar5[1] = 3;
  puVar5 = _LAB_2c55ce30;
  *puVar3 = 0x7f;
  puVar3[1] = 0xff;
  *puVar6 = 0xf;
  puVar6[1] = 0xcd;
  *puVar4 = 0x14;
  puVar4[1] = 0x34;
  *puVar5 = 8;
  puVar5[1] = 0x10;
  if (*_LAB_2c55ce0c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

