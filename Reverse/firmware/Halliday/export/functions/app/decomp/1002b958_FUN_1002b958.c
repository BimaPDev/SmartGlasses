/* FUN_1002b958 @ 0x1002b958 */

void FUN_1002b958(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *DAT_1002b9a8;
  iVar5 = *DAT_1002b9ac;
  bVar1 = FUN_10126fd2(*(undefined4 *)(iVar5 + 0x10));
  if (param_1 < (int)(uint)bVar1) goto LAB_1002b988;
  do {
    uVar2 = 0xffffffff;
    while( true ) {
      if (*DAT_1002b9a8 == iVar4) {
        return;
      }
      FUN_1013cdc0(uVar2);
LAB_1002b988:
      iVar3 = FUN_10126fb4(*(undefined4 *)(iVar5 + 0x10),param_1);
      if ((iVar3 == 0) || (iVar3 = FUN_10126fb4(iVar3,0), iVar3 == 0)) break;
      uVar2 = *(undefined4 *)(iVar3 + 0x10);
    }
  } while( true );
}

