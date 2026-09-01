/* FUN_100a4328 @ 0x100a4328 */

int FUN_100a4328(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = DAT_100a4438;
  iVar4 = 0;
  iVar5 = 0;
  uVar6 = (DAT_100a4414 - DAT_100a4418) * 0x20 & 0xff00;
  do {
    iVar7 = DAT_100a441c + iVar5 * 8;
    if ((-1 < (int)((uint)*(byte *)(iVar7 + 4) << 0x1f)) &&
       (iVar2 = FUN_1011b4a2(*(undefined4 *)(DAT_100a4420 + iVar5 * 4)), iVar2 == 0)) {
      iVar2 = thunk_FUN_1009f30c(0x24,uVar1);
      if (iVar2 == 0) {
LAB_100a43ec:
        FUN_100a5b78(uVar6 | 0x4a0011,DAT_100a442c,DAT_100a4434);
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x10) != 0) {
            FUN_1012d1f4();
          }
          FUN_1012d1f4(iVar2);
        }
        return -0xc;
      }
      iVar4 = thunk_FUN_1009f30c(0x250,uVar1);
      *(int *)(iVar2 + 0x10) = iVar4;
      if (iVar4 == 0) goto LAB_100a43ec;
      *(undefined4 *)(iVar2 + 8) = 0;
      uVar3 = *(undefined4 *)(DAT_100a4424 + iVar5 * 4);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      iVar4 = FUN_1006c5dc(iVar2);
      if (iVar4 == 0) {
        FUN_100a5b78(uVar6 | 0x410031,DAT_100a442c,DAT_100a4430,uVar3);
        *(int *)(DAT_100a441c + iVar5 * 8) = iVar2;
        *(byte *)(iVar7 + 4) = *(byte *)(iVar7 + 4) & 0xfc | 3;
      }
      else {
        FUN_100a5b78(uVar6 | 0x3d0022,DAT_100a442c,DAT_100a4428,uVar3,iVar4);
        FUN_1012d1f4(*(undefined4 *)(iVar2 + 0x10));
        FUN_1012d1f4(iVar2);
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 5) {
      return iVar4;
    }
  } while( true );
}

