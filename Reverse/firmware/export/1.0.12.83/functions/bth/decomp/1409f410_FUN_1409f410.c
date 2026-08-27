/* FUN_1409f410 @ 0x1409f410 */

void FUN_1409f410(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = FUN_140a047c();
  uVar1 = DAT_1409f460;
  if (*DAT_1409f458 == 0) {
    iVar5 = *DAT_1409f45c;
    *DAT_1409f458 = iVar5 + 0xa30;
    iVar3 = FUN_140db784(iVar5 + 0xa34,uVar1,6);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_140390b4();
      *(undefined4 *)(iVar5 + 0xa34) = *puVar4;
      *(undefined2 *)(iVar5 + 0xa38) = *(undefined2 *)(puVar4 + 1);
    }
  }
  FUN_140a04dc(uVar2);
  return;
}

