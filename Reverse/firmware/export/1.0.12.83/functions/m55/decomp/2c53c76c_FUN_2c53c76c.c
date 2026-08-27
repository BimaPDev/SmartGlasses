/* FUN_2c53c76c @ 0x2c53c76c */

void FUN_2c53c76c(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53c864,0xf9,DAT_2c53c860,DAT_2c53c85c);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  uVar2 = FUN_2c637344();
  psVar1 = DAT_2c53c84c;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_2c607048(uVar2,(int)*psVar1,0x27d1);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_2c5e2e58(DAT_2c53c850);
  FUN_2c606e38(uVar3,uVar2,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x2c),0xff00ff00,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x2c),0x99,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x2c),1,0);
  FUN_2c606d30(*(undefined4 *)(param_1 + 0x2c),0x4a,0);
  FUN_2c606d3c(*(undefined4 *)(param_1 + 0x2c),0xc,0);
  FUN_2c606d24(*(undefined4 *)(param_1 + 0x2c),0xc,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x2c),DAT_2c53c854);
  FUN_2c608808(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x10),0xe,0,0);
  uVar2 = FUN_2c606a10(*(undefined4 *)(param_1 + 8));
  FUN_2c603a04(uVar2,0,DAT_2c53c858);
  FUN_2c606abc(uVar2,0x10);
  FUN_2c607048(uVar2,0x2064,1);
  FUN_2c606d6c(uVar2,0,0);
  FUN_2c608808(uVar2,*(undefined4 *)(param_1 + 0x2c),0xe,0,0);
  return;
}

