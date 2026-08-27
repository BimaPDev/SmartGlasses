/* FUN_14081f4c @ 0x14081f4c */

int FUN_14081f4c(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((*(int *)(param_2 + 0xe8) << 0x16 < 0) && (*(int *)(param_2 + 0xe4) << 0x18 < 0)) {
    bVar1 = FUN_14081e88(param_2);
    return (int)(char)(bVar1 ^ 1);
  }
  iVar2 = FUN_140879e0();
  return iVar2;
}

