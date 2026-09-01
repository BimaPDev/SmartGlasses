/* FUN_10094174 @ 0x10094174 */

void FUN_10094174(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_328 [256];
  undefined1 auStack_228 [516];
  
  if ((param_1 - 2U & 0xff) < 4) {
    for (iVar3 = FUN_1011ea10(param_2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if ((*(char *)(param_2 + iVar3) == '/') || (*(char *)(param_2 + iVar3) == '\\')) {
        iVar3 = iVar3 + 1;
        break;
      }
    }
    uVar4 = FUN_1012a75c();
    puVar2 = DAT_10094228;
    piVar1 = DAT_10094224;
    if (*DAT_10094224 != 0) {
      FUN_10118d90(auStack_328,0x100,param_5,&stack0x00000004);
      FUN_10118a1c(auStack_228,0x200,DAT_10094220,*(undefined4 *)(DAT_1009421c + param_1 * 4),
                   uVar4 / 1000,uVar4 % 1000,uVar4 - *puVar2,param_4,auStack_328,iVar3 + param_2,
                   param_3);
      (*(code *)*piVar1)(auStack_228);
    }
    *puVar2 = uVar4;
  }
  return;
}

