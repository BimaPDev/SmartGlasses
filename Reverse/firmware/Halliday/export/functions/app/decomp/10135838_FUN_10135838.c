/* FUN_10135838 @ 0x10135838 */

int FUN_10135838(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1013577a(param_1 + 0xd4,4);
  if (iVar1 == 0) {
    uVar3 = 30000;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = FUN_1013401c(0,0,uVar3,0);
  if (iVar1 == 0) {
    FUN_10135440(param_1 + 0xd4,4);
  }
  else {
    puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,1);
    *puVar2 = param_2;
  }
  return iVar1;
}

