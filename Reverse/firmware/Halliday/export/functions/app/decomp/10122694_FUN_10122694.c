/* FUN_10122694 @ 0x10122694 */

undefined4 FUN_10122694(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_2 - 2;
  uVar5 = 1 << (uVar3 & 7) & 0xff;
  iVar2 = *(int *)(param_1 + 0x48) + (uVar3 >> 0xc);
  uVar3 = (uVar3 & 0xfff) >> 3;
  do {
    uVar4 = uVar3;
    iVar6 = iVar2 + 1;
    iVar2 = FUN_10122662(param_1,iVar2);
    if (iVar2 != 0) {
      return 1;
    }
    do {
      do {
        bVar1 = *(byte *)(param_1 + uVar4 + 0x50);
        if (((bVar1 & uVar5) != 0) == param_4) {
          return 2;
        }
        param_3 = param_3 + -1;
        *(byte *)(param_1 + uVar4 + 0x50) = bVar1 ^ (byte)uVar5;
        *(undefined1 *)(param_1 + 3) = 1;
        if (param_3 == 0) {
          return 0;
        }
        uVar3 = uVar5 & 0x7f;
        uVar5 = uVar3 << 1;
      } while (uVar3 != 0);
      uVar4 = uVar4 + 1;
      uVar5 = 1;
      iVar2 = iVar6;
      uVar3 = 0;
    } while (uVar4 != 0x200);
  } while( true );
}

