/* FUN_1007f924 @ 0x1007f924 */

undefined4 FUN_1007f924(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = param_1[3];
  uVar5 = *(undefined4 *)(iVar3 + 0x74);
  uVar4 = *(undefined4 *)(iVar3 + 0x8c);
  if (*(char *)(iVar3 + 0x7c) != '\0') {
    *(int *)(iVar3 + 0x74) = iVar3 + 0x78;
    iVar1 = FUN_1007f4f4(param_1,*(undefined1 *)(iVar3 + 0x79),param_3,iVar3 + 0x78,param_4);
    if (iVar1 != 1) {
      if ((*(char *)(*param_1 + 0x10) != '\0') &&
         (pcVar2 = *(code **)(*param_1 + 0xc), pcVar2 != (code *)0x0)) {
        (*pcVar2)(DAT_1007f988,DAT_1007f984,0x4cb);
      }
      return 0xffffffff;
    }
    *(undefined1 *)(*(int *)(iVar3 + 0x74) + 4) = 0;
  }
  *(undefined4 *)(iVar3 + 0x74) = uVar5;
  *(undefined4 *)(iVar3 + 0x8c) = uVar4;
  *(undefined1 *)(iVar3 + 0x10e8) = 0x6e;
  *(undefined2 *)(iVar3 + 0x10ea) = 0xffff;
  return 0;
}

