/* FUN_100bc588 @ 0x100bc588 */

undefined4 FUN_100bc588(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_100bc5ac;
  iVar2 = FUN_10131468();
  iVar4 = *(int *)(iVar1 + 0xc);
  if ((iVar4 == 0) || (599 < (uint)(iVar2 - iVar4))) {
    uVar3 = FUN_10131468();
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

