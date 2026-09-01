/* FUN_10039e58 @ 0x10039e58 */

void FUN_10039e58(int param_1)

{
  if ((*DAT_10039ea0 == 0) || ((param_1 != 0x81 && (param_1 != 0x84)))) {
    if (*DAT_10039e9c == *DAT_10039e9c) {
      return;
    }
LAB_10039e7c:
    FUN_1013cdc0();
  }
  else if (*DAT_10039e9c != *DAT_10039e9c) goto LAB_10039e7c;
  if (*DAT_10039e54 == 0) {
    if (*DAT_10039e50 == *DAT_10039e50) {
      return;
    }
  }
  else if (*DAT_10039e50 == *DAT_10039e50) goto LAB_10039e30;
  FUN_1013cdc0();
LAB_10039e30:
  thunk_FUN_10138be0(8,0);
  return;
}

