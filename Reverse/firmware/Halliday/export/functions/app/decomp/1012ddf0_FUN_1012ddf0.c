/* FUN_1012ddf0 @ 0x1012ddf0 */

void FUN_1012ddf0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1f)) {
    return;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0xc);
  uVar6 = (uint)*(ushort *)(param_1 + 10);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24);
  cVar1 = *(char *)(param_1 + 2);
  uVar4 = uVar5 - ((uVar5 - uVar6 & 0xffff) >> 1) & 0xffff;
  if (cVar1 == '\x01') {
    if (param_2 < (int)uVar6) {
LAB_1012de42:
      FUN_100a6fec(uVar2,4,param_4);
      uVar3 = 0;
      goto LAB_1012de4c;
    }
    if ((int)uVar4 < param_2) goto LAB_1012de52;
LAB_1012de64:
    FUN_100a6fec(uVar2,1,param_5);
    uVar3 = 2;
  }
  else {
    if (cVar1 == '\x02') {
      if (param_2 <= (int)uVar5) {
        if ((int)uVar6 <= param_2) goto LAB_1012de52;
        goto LAB_1012de42;
      }
    }
    else {
      if (cVar1 != '\0') {
        return;
      }
      if (param_2 <= (int)uVar5) {
        if (param_2 < (int)uVar4) {
LAB_1012de52:
          FUN_100a6fec(uVar2,2,0,param_4);
          return;
        }
        goto LAB_1012de64;
      }
    }
    FUN_100a6fec(uVar2,4);
    uVar3 = 1;
  }
LAB_1012de4c:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}

