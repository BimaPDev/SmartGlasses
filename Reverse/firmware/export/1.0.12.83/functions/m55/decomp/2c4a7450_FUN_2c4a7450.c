/* FUN_2c4a7450 @ 0x2c4a7450 */

void FUN_2c4a7450(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = DAT_2c4a753c;
  iVar5 = *DAT_2c4a753c;
  if (iVar5 == 0) {
    iVar5 = FUN_2c4c2c50(DAT_2c4a7580,1000);
    *piVar1 = iVar5;
  }
  puVar2 = DAT_2c4a7540;
  uVar6 = FUN_2c4c2cd8(iVar5,0x5c);
  uVar4 = DAT_2c4a7548;
  uVar3 = DAT_2c4a7544;
  *puVar2 = uVar6;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x834,DAT_2c4a754c,LAB_2c4a7550,uVar4,uVar3,0x834,0x5c);
}

