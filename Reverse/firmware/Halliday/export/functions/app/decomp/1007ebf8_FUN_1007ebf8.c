/* FUN_1007ebf8 @ 0x1007ebf8 */

undefined4 FUN_1007ebf8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[3];
  FUN_10120ccc();
  if (*(byte *)(*(int *)(iVar4 + 0x74) + 1) < 5) {
    FUN_10121a00(param_1);
    iVar5 = 0;
    do {
      if (*(short *)(*(int *)(*(int *)(iVar4 + 0x74) + 0xc) + iVar5) != -1) {
        FUN_101217c0(param_1);
        FUN_1012197a(param_1,*(undefined2 *)(*(int *)(*(int *)(iVar4 + 0x74) + 0xc) + iVar5));
        iVar2 = FUN_10120ace(param_1,*(undefined2 *)(*(int *)(*(int *)(iVar4 + 0x74) + 0xc) + iVar5)
                            );
        if (iVar2 == 0xff) goto LAB_1007ec12;
        iVar2 = FUN_1007effc(param_1,iVar2,0);
        *(undefined1 *)(*(int *)(iVar4 + 0x74) + 4) = 1;
        if (iVar2 == 0) goto LAB_1007ec12;
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 != 0x40);
    FUN_1007f924(param_1);
    uVar1 = 1;
    *(undefined4 *)(iVar4 + 0x10e8) = 0xffffff6e;
  }
  else {
    if ((*(char *)(*param_1 + 0x10) != '\0') &&
       (pcVar3 = *(code **)(*param_1 + 0xc), pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_1007ec98,DAT_1007ec94,0x27a);
    }
LAB_1007ec12:
    uVar1 = 0;
  }
  return uVar1;
}

