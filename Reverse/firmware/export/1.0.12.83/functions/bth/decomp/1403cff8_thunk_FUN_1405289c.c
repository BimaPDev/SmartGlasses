/* thunk_FUN_1405289c @ 0x1403cff8 */

undefined4 thunk_FUN_1405289c(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar3 = DAT_14052998;
  if (*(char *)(DAT_14052998 + 0x128) != '\0') {
    cVar1 = *(char *)(DAT_14052998 + 0x123);
    if (cVar1 == -1) {
      uVar7 = 0x6e9;
      uVar5 = DAT_140529bc;
    }
    else {
      if (((cVar1 != '\0') && (iVar4 = FUN_1404a1b4(0), *(char *)(iVar4 + 0x45) != '\0')) &&
         (*(char *)(iVar4 + 0x49) == '\0')) {
        cVar2 = *(char *)(iVar3 + 0x12a);
        if (cVar2 != cVar1) {
          uVar5 = FUN_1402a6e8(4,0x6f8,DAT_140529a8,DAT_140529a4,DAT_140529ac,DAT_1405299c,cVar1,
                               cVar2);
          *(undefined1 *)(iVar3 + 0x128) = 0;
          return uVar5;
        }
        iVar4 = FUN_1404a1b4(cVar2);
        uVar6 = FUN_14032b20(*(undefined2 *)(iVar4 + 8));
        uVar5 = DAT_1405299c;
        FUN_1402a6e8(4,0x700,DAT_140529a8,DAT_140529a4,DAT_140529b0,DAT_1405299c,cVar2,0);
        uVar7 = FUN_1402a6e8(4,0x701,DAT_140529a8,DAT_140529a4,DAT_140529b4,
                             *(undefined4 *)(iVar3 + 300),uVar6);
        uVar8 = *(uint *)(iVar3 + 300);
        if (uVar6 < uVar8) {
          if (uVar8 - uVar6 < 0x501) {
            return uVar7;
          }
          FUN_1402a6e8(4,0x707,DAT_140529a8,DAT_140529a4,DAT_140529b8,uVar5,uVar8,uVar6);
        }
        iVar3 = DAT_14052884;
        if (*(char *)(DAT_14052884 + 0x123) == -1) {
          uVar5 = 0x6c8;
          uVar7 = DAT_14052898;
        }
        else {
          if (((*(char *)(DAT_14052884 + 0x123) != '\0') &&
              (iVar4 = FUN_1404a1b4(0), *(char *)(iVar4 + 0x45) != '\0')) &&
             (*(char *)(iVar4 + 0x49) == '\0')) {
            FUN_14052154(0,0xd);
            return 1;
          }
          uVar5 = 0x6d0;
          uVar7 = DAT_1405288c;
        }
        FUN_1402a6e8(4,uVar5,DAT_14052894,DAT_14052890,uVar7,DAT_14052888);
        *(undefined1 *)(iVar3 + 0x128) = 0;
        return 0;
      }
      uVar7 = 0x6f1;
      uVar5 = DAT_140529a0;
    }
    param_1 = FUN_1402a6e8(4,uVar7,DAT_140529a8,DAT_140529a4,uVar5,DAT_1405299c);
    *(undefined1 *)(iVar3 + 0x128) = 0;
  }
  return param_1;
}

