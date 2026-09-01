/* FUN_100cef94 @ 0x100cef94 */

int FUN_100cef94(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_104 [4];
  undefined1 auStack_100 [36];
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 auStack_d4 [192];
  int local_14;
  
  local_d8 = (undefined1)param_1;
  local_14 = 0;
  local_dc = param_2;
  FUN_10134be0(1,0xffff,PTR_LAB_100cc934_1_100cf00c,&local_dc);
  if (param_1 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = auStack_104;
    FUN_10119c46(puVar1,4,param_1);
  }
  FUN_100c2210(auStack_100,0x24,PTR_s_BT_CCC_100cf010,param_2,puVar1);
  if (local_14 == 0) {
    puVar1 = (undefined1 *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = local_14 << 2;
    puVar1 = auStack_d4;
  }
  iVar2 = FUN_10131934(auStack_100,puVar1,iVar2);
  if (iVar2 != 0) {
    FUN_100a5b78(DAT_100cf020 | ((int)PTR_DAT_100cf018 - (int)PTR_DAT_100cf014) * 0x20 & 0xff00U,
                 DAT_100cf024,PTR_s_Failed_to_store_CCCs__err__d__100cf01c,iVar2);
  }
  return iVar2;
}

