/* FUN_100e8480 @ 0x100e8480 */

undefined4 FUN_100e8480(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_100e81e4();
  iVar4 = FUN_10138c84();
  piVar1 = DAT_100e8530;
  *DAT_100e8530 = iVar4;
  uVar5 = FUN_10138c88();
  uVar2 = DAT_100e8538;
  *DAT_100e8534 = uVar5;
  piVar3 = DAT_100e853c;
  iVar4 = thunk_FUN_1009f30c(*piVar1 * 0xcc,uVar2);
  *piVar3 = iVar4;
  if (iVar4 == 0) {
    FUN_100a5b78((DAT_100e8540 - DAT_100e8544) * 0x20 & 0xff00U | 0xd40011,DAT_100e854c,DAT_100e8548
                );
  }
  else {
    iVar4 = thunk_FUN_1009f30c(*piVar1 * 0x98,DAT_100e8538);
    *DAT_100e8550 = iVar4;
    if (iVar4 != 0) {
      iVar7 = *piVar1;
      iVar6 = *piVar3;
      for (iVar8 = 0; iVar8 < iVar7; iVar8 = iVar8 + 1) {
        *(undefined4 *)(iVar6 + 0x34 + iVar8 * 0xcc) = 0;
      }
      FUN_1011ea48(iVar4,0,iVar7 * 0x98);
      FUN_1011ea48(DAT_100e8554,0,0x3c);
      return 0;
    }
    FUN_100a5b78((DAT_100e8540 - DAT_100e8544) * 0x20 & 0xff00U | 0xdb0011,DAT_100e854c,DAT_100e8558
                );
    FUN_1012d1f4(*piVar3);
  }
  return 0xffffffff;
}

