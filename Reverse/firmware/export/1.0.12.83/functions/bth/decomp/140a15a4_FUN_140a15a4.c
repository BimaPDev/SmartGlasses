/* FUN_140a15a4 @ 0x140a15a4 */

undefined4 FUN_140a15a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (iVar2 = *DAT_140a1614, iVar2 != 0)) &&
     (uVar3 = *(uint *)(iVar2 + 0x16c), uVar3 != 0)) {
    uVar4 = 0;
    do {
      iVar1 = FUN_140db784(uVar4 * 0x118 + iVar2 + 0x16c + 4,param_1,6);
      if (iVar1 == 0) {
        if (uVar4 == 0xff) {
          return 1;
        }
        FUN_140e5278(param_2,(char)uVar4 * 0x118 + iVar2 + 0x16c + 4,0x112);
        return 0;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar3);
  }
  return 1;
}

