/* FUN_100e50f4 @ 0x100e50f4 */

void FUN_100e50f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = ((int)PTR_DAT_100e515c - (int)PTR_DAT_100e5158) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0x1d40031,PTR_LAB_1015b3a4_1_100e5160);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  iVar1 = FUN_100e4ed0(param_1,param_2);
  if (iVar1 == 0) {
    FUN_100a5b78(uVar3 | 0x1da0021,PTR_s_Can_t_find_client_info_100e5164);
  }
  else {
    if ((*(int *)(iVar1 + 0x18) != 0) &&
       (pcVar2 = *(code **)(*(int *)(iVar1 + 0x18) + 8), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,*(undefined1 *)(iVar1 + 9));
    }
    FUN_10138a6a(iVar1);
  }
  FUN_100e4fb4();
  return;
}

