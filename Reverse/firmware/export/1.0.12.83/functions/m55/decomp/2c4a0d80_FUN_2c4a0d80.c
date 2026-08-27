/* FUN_2c4a0d80 @ 0x2c4a0d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0d80(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  uint uStack_18;
  int iStack_14;
  
  iVar5 = *param_3;
  iStack_14 = *_LAB_2c4a0e24;
  uStack_18 = param_4;
  iVar1 = FUN_2c4a09bc(param_1,&uStack_18,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2f8,_LAB_2c4a0e30,_LAB_2c4a0e2c,_LAB_2c4a0e28);
  }
  uVar4 = uStack_18 & 0xff00;
  uStack_18 = uVar4;
  if (((*(char *)(iVar5 + 0x11) != '\0') && (uVar2 = FUN_2c4a301c(), (uVar2 & uVar4 >> 8) == 0)) &&
     (bVar3 = *(char *)(iVar5 + 0x12) + 1, *(byte *)(iVar5 + 0x12) = bVar3, 6 < bVar3)) {
    if (*_LAB_2c4a0e34 != 0) {
      FUN_2c6448f0();
    }
    *(undefined1 *)(iVar5 + 0x11) = 0;
  }
  uStack_1a = 0;
  uStack_1c = (undefined1)(uStack_18 >> 8);
  uStack_1b = 1;
  FUN_2c4a06fc(&uStack_1c);
  if (*_LAB_2c4a0e24 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

