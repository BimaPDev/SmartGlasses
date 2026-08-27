/* FUN_14087718 @ 0x14087718 */

int FUN_14087718(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + 2);
  if (((code *)*DAT_14087758 != (code *)0x0) &&
     (iVar4 = (*(code *)*DAT_14087758)(puVar5), iVar4 != 0)) {
    iVar4 = FUN_1407772c(0x434,7,0);
    if (iVar4 != 0) {
      puVar3 = (undefined4 *)FUN_14075458(iVar4,7);
      *puVar3 = *puVar5;
      uVar1 = *(undefined2 *)(param_1 + 6);
      *(undefined1 *)((int)puVar3 + 6) = 0xe;
      *(undefined2 *)(puVar3 + 1) = uVar1;
      cVar2 = FUN_1407780c(iVar4);
      return (int)cVar2;
    }
    return 1;
  }
  iVar4 = FUN_140876c4(puVar5,*(undefined1 *)(DAT_1408775c + 0x46),
                       *(undefined1 *)(DAT_1408775c + 0x47),*(undefined1 *)(DAT_1408775c + 0x45),
                       *(undefined1 *)(DAT_1408775c + 0x44));
  return iVar4;
}

