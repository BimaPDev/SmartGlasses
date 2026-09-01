/* FUN_10084b28 @ 0x10084b28 */

undefined4 FUN_10084b28(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  iVar3 = FUN_10122662();
  if (iVar3 == 0) {
    if (*(short *)(param_1 + 0x24e) == -0x55ab) {
      if ((*(char *)(param_1 + 0x50) == -0x17) ||
         ((*(uint *)(param_1 + 0x50) & 0xff00ff) == DAT_10084bbc)) {
        uVar7 = FUN_1012227a(param_1 + 0x86,0);
        if (((uint)uVar7 & 0xffffff) == DAT_10084bc0) {
          return (int)((ulonglong)uVar7 >> 0x20);
        }
        uVar7 = FUN_1012227a(param_1 + 0xa2);
        if ((int)uVar7 == DAT_10084bc4) {
          return (int)((ulonglong)uVar7 >> 0x20);
        }
      }
      pcVar4 = DAT_10084bc8;
      pcVar6 = (char *)(param_1 + 0x50);
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar4;
        if ((char *)(param_1 + 0x5b) == pcVar6 + 1) {
          if (cVar1 == cVar2) {
            return 1;
          }
          return 2;
        }
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      uVar5 = 2;
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 4;
  }
  return uVar5;
}

