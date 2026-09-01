/* FUN_100cb5a8 @ 0x100cb5a8 */

int FUN_100cb5a8(int param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = DAT_100cb600;
  if (param_1 != 6) {
    uVar1 = 0;
  }
  iVar2 = FUN_100ca5a4(uVar1,4,2000,0,param_4);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_100cb608 - DAT_100cb604) * 0x20 & 0xff00U | 0x1a80011,DAT_100cb610,
                 DAT_100cb60c,param_1);
  }
  else {
    puVar3 = (undefined1 *)FUN_100c1fe4(iVar2 + 8,4);
    *puVar3 = (char)param_1;
    puVar3[1] = param_2;
    *(undefined2 *)(puVar3 + 2) = param_3;
  }
  return iVar2;
}

