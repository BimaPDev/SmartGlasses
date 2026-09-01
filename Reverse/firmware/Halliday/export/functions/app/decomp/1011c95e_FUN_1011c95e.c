/* FUN_1011c95e @ 0x1011c95e */

bool FUN_1011c95e(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (int)(char)(param_3 + -1);
  iVar2 = iVar1 << 2;
  for (; -1 < iVar1; iVar1 = (int)(char)((char)iVar1 + -1)) {
    uVar3 = uVar3 | *(uint *)(param_1 + iVar2) ^ *(uint *)(param_2 + iVar2);
    iVar2 = iVar2 + -4;
  }
  return uVar3 != 0;
}

