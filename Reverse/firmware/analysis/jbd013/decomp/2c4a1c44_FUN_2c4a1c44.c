/* FUN_2c4a1c44 @ 0x2c4a1c44 */

void FUN_2c4a1c44(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = DAT_2c4a1d58;
  iVar6 = *DAT_2c4a1d58;
  if (iVar6 == 0) {
    iVar6 = FUN_2c4c2c50(DAT_2c4a1d98,1000);
    *piVar1 = iVar6;
  }
  puVar2 = DAT_2c4a1d5c;
  uVar7 = FUN_2c4c2cd8(iVar6,0x74);
  uVar5 = DAT_2c4a1d68;
  uVar4 = DAT_2c4a1d64;
  uVar3 = DAT_2c4a1d60;
  *puVar2 = uVar7;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x640,uVar5,uVar4,uVar3,0x74);
}

