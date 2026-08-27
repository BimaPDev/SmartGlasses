/* FUN_140a1718 @ 0x140a1718 */

undefined4 FUN_140a1718(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (((param_2 != (int *)0x0) && (iVar4 = *DAT_140a177c, iVar4 != 0)) &&
     (uVar5 = *(uint *)(iVar4 + 0x16c), uVar5 != 0)) {
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 0x118 + iVar4 + 0x16c;
      iVar2 = FUN_140db784(iVar2 + 4,param_1,6,iVar2,param_4);
      if (iVar2 == 0) {
        if (uVar3 == 0xff) {
          uVar1 = 0xffffffff;
        }
        else {
          *param_2 = (char)uVar3 * 0x118 + iVar4 + 0x16c + 4;
          uVar1 = 0;
        }
        return uVar1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar5);
  }
  return 0xffffffff;
}

