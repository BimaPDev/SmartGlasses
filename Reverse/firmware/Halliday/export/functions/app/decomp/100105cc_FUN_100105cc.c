/* FUN_100105cc @ 0x100105cc */

void FUN_100105cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r3;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_1 + 2;
  iVar1 = *DAT_10010608;
  iVar2 = 0;
  do {
    uVar4 = CONCAT44(param_2,iVar2);
    if (iVar2 == param_3) {
      if (*DAT_10010608 == iVar1) {
        return;
      }
      uVar4 = FUN_1013cdc0();
      param_3 = extraout_r2;
      param_1 = extraout_r3;
    }
    param_2 = (int)((ulonglong)uVar4 >> 0x20);
    iVar2 = (int)uVar4;
    *(undefined2 *)(param_1 + iVar2 * 2) = *(undefined2 *)(param_1 + iVar2 * 4);
    *(undefined2 *)(param_2 + iVar2 * 2) = *(undefined2 *)(iVar3 + iVar2 * 4);
    iVar2 = iVar2 + 1;
  } while( true );
}

