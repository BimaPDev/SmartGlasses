/* FUN_14094620 @ 0x14094620 */

undefined4 FUN_14094620(int param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  
  sVar2 = 0;
  iVar3 = param_1 + 0x6e8;
  *(int *)(param_1 + 0x6c4) = iVar3;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  cVar1 = '\x01';
  *(undefined1 *)(param_1 + 0x6c0) = 0x20;
  uVar5 = 0;
  do {
    cVar4 = (char)sVar2;
    if ((param_2 >> (uVar5 & 0xff) & 1) != 0) {
      *(undefined1 *)(iVar3 + sVar2 * 4 + 9) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x6c4) + sVar2 * 4 + 10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x6c4) + sVar2 * 4 + 0xb) = 0;
      cVar4 = cVar4 + '\x01';
      *(char *)(*(int *)(param_1 + 0x6c4) + sVar2 * 4 + 0xc) = cVar1;
      iVar3 = *(int *)(param_1 + 0x6c4);
      sVar2 = (short)cVar4;
    }
    uVar5 = uVar5 + 1;
    cVar1 = cVar1 + '\x01';
  } while (uVar5 != 7);
  *(char *)(iVar3 + 8) = cVar4;
  *(short *)(param_1 + 0x6c2) = sVar2 * 4 + 9;
  *(undefined4 *)(param_1 + 0x6e0) = 1;
  FUN_140755e4();
  iVar3 = FUN_140e5558(param_1 + 4,param_1 + 0x6b8);
  if (iVar3 == 0) {
    FUN_140e59c8(param_1 + 4,param_1 + 0x6b8);
    FUN_140933d8(param_1);
    FUN_1407561c();
    return 2;
  }
  FUN_140933d8(param_1);
  FUN_1407561c();
  return 1;
}

