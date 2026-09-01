/* FUN_10132c82 @ 0x10132c82 */

int FUN_10132c82(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char acStack_30 [20];
  undefined1 uStack_1c;
  char acStack_1b [19];
  
  cVar1 = *param_2;
  if (cVar1 == *param_1) {
    if (cVar1 == '\x01') {
      uVar3 = *(uint *)(param_1 + 4);
      uVar4 = *(uint *)(param_2 + 4);
    }
    else {
      if (cVar1 == '\x02') {
        param_2 = param_2 + 1;
        goto LAB_10132ca8;
      }
      if (cVar1 != '\0') {
        return -0x16;
      }
      uVar3 = (uint)*(ushort *)(param_1 + 2);
      uVar4 = (uint)*(ushort *)(param_2 + 2);
    }
    iVar2 = uVar3 - uVar4;
  }
  else {
    FUN_100c4cc8(param_1,acStack_30);
    FUN_100c4cc8(param_2,&uStack_1c);
    param_2 = acStack_1b;
    param_1 = acStack_30;
LAB_10132ca8:
    iVar2 = FUN_1011ea30(param_1 + 1,param_2,0x10);
  }
  return iVar2;
}

