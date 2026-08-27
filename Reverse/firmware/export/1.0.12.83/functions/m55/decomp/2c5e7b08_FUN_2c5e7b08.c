/* FUN_2c5e7b08 @ 0x2c5e7b08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e7b08(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_18;
  int iStack_14;
  
  puVar1 = _LAB_2c5e7b2c;
  uVar2 = FUN_2c606a10();
  uVar3 = _DAT_2c5e7b30;
  *puVar1 = uVar2;
  FUN_2c603a04(uVar2,0,uVar3);
  uVar3 = *puVar1;
  iStack_14 = *DAT_2c6070b8;
  iVar4 = FUN_2c603c78(uVar3,1,&iStack_18,0);
  if (iVar4 == 1) {
    if (iStack_18 != 0x144) goto LAB_2c60706c;
  }
  else if (iVar4 == 0) {
LAB_2c60706c:
    FUN_2c606c7c(uVar3,0x144,0);
  }
  iVar4 = FUN_2c603c78(uVar3,4,&iStack_18,0);
  if (iVar4 == 1) {
    if (iStack_18 == 0x27d1) goto LAB_2c607092;
  }
  else if (iVar4 != 0) goto LAB_2c607092;
  FUN_2c606ca0(uVar3,0x27d1,0);
LAB_2c607092:
  if (*DAT_2c6070b8 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

