/* FUN_10137964 @ 0x10137964 */

int FUN_10137964(char *param_1,char param_2,char param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_1013401c(0,0,0xffffffff,0xffffffff,param_4);
  puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,3);
  if (*param_1 == '\x01') {
    uVar4 = 3;
  }
  else {
    uVar4 = 1;
  }
  *puVar2 = uVar4;
  puVar2[1] = 0xef;
  puVar2[2] = ((char)param_4 + '\x02') * '\x02' | 1;
  pbVar3 = (byte *)FUN_100c1fe4(iVar1 + 8,2);
  *pbVar3 = param_2 << 1 | param_3 << 2 | 1;
  pbVar3[1] = (byte)(param_4 << 1) | 1;
  return iVar1;
}

